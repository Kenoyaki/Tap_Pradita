#include <iostream>
#include <conio.h>
using namespace std;

int shop(int* currentDamage, int* currentMoney, int* karambitBought, int*  bayonetBought, int* taliPinggangBought){
        int pilihan = 0;
        int damage = 0;
        int karambit = 10;
        int bayonet = 30;
        int taliPinggang = 50;

        do{
        cout<<"Welcome to my shop! \n";
        cout<<"Select what weapon do you want to Buy/Upgrade \n\n";
        cout<<"Your Current Gold is : "<<*currentMoney<<"\n";
        cout<<"Your Current Damage is : "<<*currentDamage<<"\n\n";
        cout<<"1.Karambit Damage + 1\n";
        cout<<"Price : 10 Gold \n\n";
        cout<<"2.Bayonet Damage +5\n";
        cout<<"Price : 30 Gold \n\n";
        cout<<"3.Tali pinggang +15\n";
        cout<<"Price : 50 Gold\n\n";
        cout<<"4.Exit\n";
        cout<<"Your Input :\n";
        cin>>pilihan;
        system("cls");

        if(pilihan == 1){
            if(*currentMoney < karambit){
                cout<<"Your Gold is not Enough, Go kill some monster to earn some gold!\n\n";
                cout<<"Press anything to Continue \n";
                getch();
                system ("cls");
            }
            else{
                if(*karambitBought == 0){
                    *karambitBought = 1;
                    *currentMoney -= karambit;
                    damage = 1;
                    *currentDamage += damage;
                    cout<<"You have bought Karambit\n";
                    cout<<"Your attack is now "<<*currentDamage<<" \n\n";
                    cout<<"Your current Gold is "<<*currentMoney<<"\n";
                    cout<<"Press Enter To continue \n";
                    getch();
                    system("cls");
                }
                else{
                    *currentMoney -= karambit;
                    damage = 1;
                    *currentDamage += damage;
                    cout<<"You have Upgraded Karambit\n";
                    cout<<"Your attack is now "<<*currentDamage<<" \n\n";
                    cout<<"Your current Gold is "<<*currentMoney<<"\n";
                    cout<<"Press Enter To continue \n";
                    getch();
                    system("cls");
                }

            }
        }
        else if(pilihan == 2){
                if(*currentMoney < bayonet){
                cout<<"Your Gold is not Enough, Go kill some monster to earn some gold!\n\n";
                cout<<"Press anything to Continue \n";
                getch();
                system ("cls");
            }
            else{
                if(*bayonetBought == 0){
                    *bayonetBought = 1;
                    *currentMoney -= bayonet;
                    damage = 5;
                    *currentDamage += damage;
                    cout<<"You have bought Bayonet\n";
                    cout<<"Your attack is now "<<*currentDamage<<" \n\n";
                    cout<<"Your current Gold is "<<*currentMoney<<"\n";
                    getch();
                    system("cls");
                }

                else{
                    *currentMoney -= bayonet;
                    damage = 5;
                    *currentDamage += damage;
                    cout<<"You have upgraded Bayonet\n";
                    cout<<"Your attack is now "<<*currentDamage<<" \n\n";
                    cout<<"Your current Gold is "<<*currentMoney<<"\n";
                    getch();
                    system("cls");
                }

            }
        }

        else if(pilihan == 3){
                if(*currentMoney < taliPinggang){
                cout<<"Your Gold is not Enough, Go kill some monster to earn some gold!\n\n";
                cout<<"Press anything to Continue \n";
                getch();
                system ("cls");
            }
            else{
                if(taliPinggangBought == 0){
                    *currentMoney -= taliPinggang;
                    damage = 15;
                    *currentDamage += damage;
                    cout<<"You have bought Tali Pinggang\n";
                    cout<<"Your attack is now "<<*currentDamage<<" \n\n";
                    cout<<"Your current Gold is "<<*currentMoney<<"\n";
                    getch();
                    system("cls");
                }

                else{
                    *currentMoney -= taliPinggang;
                    damage = 15;
                    *currentDamage += damage;
                    cout<<"You have Upgraded Tali Pinggang\n";
                    cout<<"Your attack is now "<<*currentDamage<<" \n\n";
                    cout<<"Your current Gold is "<<*currentMoney<<"\n";
                    getch();
                    system("cls");
                }

            }
        }

        else if(pilihan == 4){
            cout<<"You are now back in the jungle, Becareful! \n";
        }

        else{
            cout<<"Please Enter A specified Number\n\n";
        }
        }while(pilihan != 4);



    return damage;

}

void attack(int damage){
    int counterA;
    int darah[10][2] = { {1,10}, {2,40}, {3,60}, {4,80}, {5,100}, {6,120}, {7,140}, {8,160}, {9,180}, {10,200}};
    int currentDamage = 1;
    int musuh = 10 ;
    int counterB ;
    int button ;
    int current ;
    int currentHealth;
    int area[10] = {1,2,3,4,5,6,7,8,9,10};
    int money = 0;
    int currentMoney = 0;
    int karambitBought = 0;
    int bayonetBought = 0;
    int taliPinggangBought = 0;


      for(counterB = 0 ; counterB < 10; counterB++){


            for(counterA = 0 ; counterA < 5 ; counterA++){
                currentHealth = darah[counterB][1] ;

                        do{
                        cout <<"_________________________________________________________________________________________________________________"<<endl ;
                        cout <<"| TapPradita       |                                                                            |  Area       : "<<area[counterB]<<"|"<<endl ;
                        cout <<"|-------------------                              MONEY : "<<currentMoney<<"                                     | Enemy Level : "<<darah[counterB][0]<<"|"<<endl ;
                        cout <<"|                                                                                               -----------------|"<<endl ;
                        cout <<"|                                       ---------------------------                                              |"<<endl ;
                        cout <<"|------------------                    |      Enemy Health : "<<currentHealth<<"    |                                             |"<<endl ;
                        cout <<"| Current DPT : "<<currentDamage<<"     \                  ---------------------------                             Enemy "<<counterA+1<<" out of "<< "5 |"<<endl ;
                        cout <<"|-------------------                                                                                             |"<<endl ;
                        cout <<"|------------------                               -------                                                        |"<<endl ;
                        cout <<"|  Press :      \                                  | . . |                                                        |"<<endl ;
                        cout <<"|  1. Attack                                      |  ~  |                                                        |"<<endl ;
                        cout <<"|  2. Shop                                 |-----|||||||||-----|                                                 |"<<endl ;
                        cout <<"|                                          |     |||||||||      |                                                |"<<endl ;
                        cout <<"|                                    ~~~~~~|    |||||||||||     |_|                                              |"<<endl ;
                        cout <<"|---------------------              ```         |||||||||||      |                      -------------------------|"<<endl ;
                        cout <<"|////////////////////|              ```        |||||||||||||     |                      |\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|"<<endl ;
                        cout <<"|////////////////////|              ```       |||||||||||||||    |_____)                |\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|"<<endl ;
                        cout <<"|////////////////////|              ```        |||       |||           )                |\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|"<<endl ;
                        cout <<"|////////////////////|                         |||       |||                            |\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|"<<endl ;
                        cout <<"|////////////////////------------              |||       |||                            |\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|"<<endl ;
                        cout <<"|///////////////////////////////|                                             |\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|"<<endl ;
                        cout <<"|///////////////////////////////|                    o                        |\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|"<<endl ;
                        cout <<"|///////////////////////////////|--------      \---|- | -              --------|\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|"<<endl ;
                        cout <<"|///////////////////////////////////////|            |      <--You    |\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|"<<endl ;
                        cout <<"|///////////////////////////////////////|           | |               |\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|"<<endl ;
                        cout <<"|________________________________________________________________________________________________________________|"<<endl ;
                        cout<<"Your Input \n";
                        cin>>button;

                        system("cls");

                        if(button == 1) {
                            current = currentHealth - currentDamage;
                            currentHealth = current;
                        }
                        else if(button == 2){
                            shop(&currentDamage,&currentMoney,&karambitBought,&bayonetBought,&taliPinggangBought);
                            current = 1;
                        }
                        else{
                            cout<<"You have Pressed the Wrong Button, Please Press the Specified Number!\n\n";
                            current = 1;
                        }
                        }while(currentHealth > 0);
                        system ("cls");

                        money = rand() % 10 + 1;
                        currentMoney += money;
                        cout<<"+"<<money<<" Gold\n";
                    }

            }
                 system("cls");
                 cout<<"You Win\n";
                 cout<<"Wanna Try Again?\n\n";
}

void lore(){
    string name;
    int damage = 1;
    int choice = 0;

    cout<<"Hello dear, So you are the new hero that people have talked about ?\n";
    getch();
    cout<<"Welcome to our village, First What's your name ?\n";
    cin>>name;

    do{
        cout<<"Oh hello "<<name<<" So recently theres so many monster lurking in the jungle and they have been bothering the villager \n";
        cout<<"So can you please help this village by killing those monsters? \n";
        cout<<"1.Yes \n";
        cout<<"2.No \n";
        cin>>choice;
        system ("cls");

        if(choice == 1){
            attack(damage);
        }

        else if(choice == 2){
            cout<<"Aw that's such a shame, We'll see you later!\n";
        }
        else {
            cout<<"Please enter the specified number \n";

        }
        }while(choice != 2);

}

int main(){
    int pilihan;

    do{
    cout<<"|||||||||||||||||||||||||||||||   GAME    |||||||||||||||||||||||||\n";
    cout<<"Main Menu \n";
    cout<<"1. Start\n";
    cout<<"2. Exit\n\n";
    cout<<"Your Input :\n";
    cin>>pilihan;
    cout<<"\n";
    system("cls");

    if(pilihan == 1){
        cout<<"Welcome To our game\n";
        cout<<"Please Read Before Playing\n";
        cout<<"So this is an Idle Game where you can Attack the monster as many as you want without the monster hitting you back\n";
        cout<<"You will Earn a random amount of Gold each time you killed a monster which you can use it on the shop while in the game\n";
        cout<<"There are total of 10 Areas which include 5 Monsters in each area\n\n";
        cout<<"Are you ready to Fight The monster? \n";
        cout<<"1.Yes, Im ready To fight them!!!\n";
        cout<<"2.No, Im a bit scared :(((\n\n";
        cout<<"Your Input :\n";
        cin>>pilihan;
        system("cls");

        if(pilihan == 1){
            lore();
            return 0;
        }

        else if (pilihan == 2){
            cout<<"Aw that's such a shame, We'll see you later!\n";
            return 0;
        }

        else{
            cout<<"Please Press The Specified Number!\n";
        }

    }

    else if (pilihan == 2){
        cout<<"See you next time!\n";
        return 0;
    }
    else{
        cout<<"Please Press the specified Number!\n\n";

    }

    }while(pilihan != 2);

    return 0;
}
