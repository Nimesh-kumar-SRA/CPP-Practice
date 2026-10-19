#include<iostream>
using namespace std;
int main() {
    int pick;
    cout<<"this is a adventurous game in space \n There is a monster invasion on your space ship ";
    cout<< "\nYou need to make the right choice to reach the control room while evading and fighting the monsters";
    cout<<"\n AT each point you get a choice to make and material to fight the monsters";
    cout<<"\n TO GO LEFT CLICK :: 1  \n TO GO RIGHT CLICK ::2 \n TO PICK UP ITEM CLICK :: 3 \n YES :: 4";
    cout<<"\n TO not pick ::5";
    cout<<"\nyou are at the last part of the space ship ";
    cout<<"\n >> DO YOU WANT TO OPEN THE DOOR << :: ";
    cin>>pick;
    if (pick==4){
        cout<<"\nyou have entered the second Room";
        cout<<"\nthere is a flash light on the floor do you want to pick it :";
        cin >> pick;
        if (pick == 3){
            cout <<"do you want to move to next door : ";
            cin>>pick;
            if (pick ==4){
                cout<<"you have entered the 3rd room ";
                cout<<"there are two paths left and right which path do you want to choose : ";
                cin>>pick;
                if (pick==1){
                    cout<<"you have entered the room full of monsters ";
                    cout<<"you got eaten "<<"\n   >>>>GAME OVER <<<<<";
                }else{
                    cout<<"you have entered the room with supplies";
                    cout<< "stock up on supply ";
                    cout<<"do you want to stock up :  ";
                    cin>>pick;
                    if (pick==3){
                        cout<<"\n There is also a hammer do you want to pick it up : ";
                        cin>>pick;
                        if (pick==3) {
                            cout<<"there are 3 rooms left right  and forward : ";
                        }
                        cin>>pick;
                        if (pick == 1){
                            cout<<"you reached the main station";
                            cout<<"you have won the game";
                        }else if(pick ==2){
                            cout<<"you have entered the boss room ";
                            cout<< "you died";
                            cout<< "    >>>>GAME OVER<<<<";
                        }else if (pick == 4){
                            cout<<"you have entered the room with a big hole in the ship ";
                            cout<<"you got sucked out of the ship";
                            cout<< "you died";
                            cout<< "    >>>>GAME OVER<<<<";
                        }

                    }
                }
            }


        }else{
            cout <<"do you want to move to next door : ";
            cin>>pick;
            if (pick==4){
                cout<<"you have entered the 3rd room";
                cout <<"you fall down and die due to dark";
                cout <<"game over";
            }
        }
    }else{
        cout<<"game won't continue if you don't move ";
    }
    return 0;
}