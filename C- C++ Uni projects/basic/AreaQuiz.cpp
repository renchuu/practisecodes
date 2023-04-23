#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int triangle, circle, rectangle;
    int col, row,radius,hight,base;
    int mark,shape,guess;

    for(int i=0; i<5;i++){
        shape=rand()%3;
        if (shape==0){
            base=rand()%25+1;
            hight=rand()%25+1;
            triangle=(base*hight)/2;

            cout<<"find the area of the triangle"<<endl;
            cout<<"the base is"<<base<<endl<<"the hight is "<<hight<<endl;

            cin>>guess;

            if (guess==triangle){
                mark+=20;
                cout<<"that`s correct"<<endl;
            }
            else{
                cout<<"thats wrong"<<endl;
            }
        }

        if (shape==1){
            radius=rand()%25+1;
            circle=3.14*radius*radius;

            cout<<"find the area of the circle"<<endl;
            cout<<"the radius is"<<radius<<endl;

            cin>>guess;

            if (guess==circle){
                mark+=20;
                cout<<"that`s correct"<<endl;
            }
            else{
                cout<<"thats wrong"<<endl;
            }
        }

         if (shape==2){
            col=rand()%25+1;
            row=rand()%25+1;
            rectangle=col*row;

            cout<<"find the area of the rectangle"<<endl;
            cout<<"the col is "<<col<<endl<<"the row is "<<row<<endl;

            cin>>guess;

            if (guess==rectangle){
                mark+=20;
                cout<<"that`s correct"<<endl;
            }
            else{
                cout<<"thats wrong"<<endl;
            }
        }
    }
}
