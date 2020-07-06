//Table of conversion of Feet to metres or feet to cm

//this code runs perfectly on my pc not sure why it doesnt run on SL

#include<iostream>

int main(){

double f=0.0,m=0.0,cm=0.0;

int input=0,counter =0;

std::cout<<"For Feet to Metres table input 1.    For Feet to cm table nput 2"<<std::endl;

std::cin>>input;

if(input==2){

for(f=1.0;f<=10;f++){

m=f/3.28;

cm=m*100;

std::cout<<f<<" feet is  "<<cm<<" centimetres"<<std::endl;

counter++;

if(counter==10){

std::cout<<"\n";

counter=0;

                }

        }

    }

else if(input==1){

for(f=1.0;f<=10.0;f++){

m=f/3.28;

std::cout<<f<<" feet is  "<<m<<" metres"<<::endl;//Table of conversion of Feet to metres or feet to cm

#include<iostream>

int main(){

    double f=0.0,m=0.0,cm=0.0;

    int input=0,counter =0;

    std::cout<<"For Feet to Metres table input 1.    For Feet to cm table input 2"<<std::endl;

    std::cin>>input;

    if(input==2){

        for(f=1.0;f<=100;f++){

            m=f/3.28;

            cm=m*100;

            std::cout<<f<<" feet is  "<<cm<<" centimetres"<<std::endl;

            counter++;

            if(counter==10){

                std::cout<<"\n";

                counter=0;

                }

        }

    }

    else if(input==1){

        for(f=1.0;f<=100.0;f++){

            m=f/3.28;

            std::cout<<f<<" feet is  "<<m<<" metres"<<std::endl;

            counter++;

            if(counter==10){

                std::cout<<"\n";

                counter=0;

                }

        }

    }

    else{

        std::cout<<"Choose 1 or 2. "<<input<<" is not 1 or 2 or is it now mate :)"<<std::endl;

    }

return 0;

}

counter++;

if(counter==10){

std::cout<<"\n";

counter=0;

                }

        }

    }

else{

std::cout<<"Choose 1 or 2. "<<input<<" is not 1 or 2 or is it mate :)"<<std::endl;    

}

return 0;

}
