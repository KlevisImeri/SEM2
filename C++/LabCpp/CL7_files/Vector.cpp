#include "vector.h"
#include <assert.h>
#include <limits.h>
using namespace std;

ostream& operator<<(ostream& os, const Vector& v){
    for(unsigned int i=0; i<v.elementNum; i++){
        os<<' '<<v.at(i);
    }
    return os;
}

Vector::Vector(const Vector& theOther){
    elementNum = theOther.elementNum;
    if(pData!=NULL){pData=NULL;}
    pData = new int[elementNum];
    for(int i=0; i<elementNum; i++){
        pData[i] = theOther.pData[i];
    }
}

void Vector::clear(){
    delete[] pData;
    pData=NULL;
    elementNum =0;
}

void Vector::erase(unsigned int position){
    assert(position<elementNum);

    int *temp = new int[elementNum-1];

    for(unsigned int i=0,j=0; i<elementNum; i++,j++){
        if(i==position){
            j--;
            continue;
        }
        temp[j] = pData[i];
    }
    elementNum--;
    delete[] pData;
    pData = temp;
}

int& Vector::at(unsigned int position){
    assert(position<elementNum);    
    return pData[position];
}

const int& Vector::at(unsigned int position)const{
    assert(position<elementNum);
    return pData[position];
}

bool Vector::insert(unsigned int position, int element){
    if(position==UINT_MAX){return false;}

    int *temp = NULL;
    if(position>=elementNum){
        temp = new int[position+1];
        for(int i=0; i<elementNum; i++){
            temp[i]=pData[i];
        }
        for(int i=elementNum; i<position; i++){
            temp[i]=0;
        }
        temp[position]=element;
        elementNum=position+1;
    }else if(position<elementNum){
        temp = new int[++elementNum];
        for(unsigned int i=0; i<position; i++){
            temp[i]=pData[i];
        }
        temp[position]=element;
        for(unsigned int i=position+1; i<elementNum; i++){
            temp[i]=pData[i-1];
        }
    }
    delete[] pData;
    pData = temp;

    return  true;
}

const Vector& Vector::operator=(const Vector& theOther){
    if(this==&theOther){return *this;}
    
    elementNum = theOther.elementNum;
    if(pData!=NULL){delete[] pData;};
    if(elementNum==0){
        pData=NULL;
    }else{
        pData = new int[elementNum];
    }
    for(unsigned int i=0; i<elementNum; i++){
        pData[i]=theOther.pData[i];
    }

    return *this;
}

int& Vector::operator[](unsigned int position){
    return at(position);
}

const int& Vector::operator[](unsigned int position) const{
    return at(position);
}