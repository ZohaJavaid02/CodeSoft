#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(){
    srand(time(0));  //funtion to generate a random number.
	int ran_num = 1 + (rand() % 100);
    cout << "___ Welcome to the game ___\n";
    cout << "Here, you have to guess the random number(1-100).\n";
    cout << "You have only 8 changes to guess the number.\n";
    cout<<"Let's Start....\n";
	cout<<"Difficulty level will be as follows : \n"
	<<"Enter '0' for LEVEL 0 : Here, you'll get unlimited chances to guess the number.\n"
	<<"Enter '1' for EASY : Here, you'll get 10 chances.\n"
	<<"Enter '2' for MEDIUM : Here, you'll get 8 chances.\n"
	<<"Enter '3' for HARD : Here, you'll get 5 chances.\n";
	while(true){
		int chances;
    	int guess_num;
		int diffi_level;
		cout<<"Enter Difficulty Level : ";
		cin>>diffi_level;
		if(diffi_level==0){
			while(1){
			cout<<"Enter the guessed number : ";
        		cin>>guess_num;
        		if(guess_num==ran_num){
            		cout<<"Comgratulations!!, You guessed it right.\n";
            		cout<<"The number is : \n";
            		cout<<" "<<guess_num<<"\n";
            		break;
        		}
				else{
					if(guess_num<ran_num){
            		cout<<guess_num<<" is not the right guess.\n";
            		cout<<"The number to be guessed is greater than that.\n";
        			}
        			else{
            		cout<<guess_num<<" is not the right guess.\n";
            		cout<<"The number to be guessed is smaller than that.\n";
        			}
				}
			}
		}
		if(diffi_level==1){
			int chances=10;
			cout<<"You got "<<chances<<" chances.\n";
			for(int i=1;i<=10;i++){
        		cout<<"Enter the guessed number : ";
        		cin>>guess_num;
        		if(guess_num==ran_num){
            		cout<<"Comgratulations!!, You guessed it right.\n";
            		cout<<"The number is : \n";
            		cout<<" "<<guess_num<<"\n";
            		break;
        		}
				else{
					if(guess_num<ran_num){
            		cout<<guess_num<<" is not the right guess.\n";
            		cout<<"The number to be guessed is greater than that.\n";
        			}
        			else{
            		cout<<guess_num<<" is not the right guess.\n";
            		cout<<"The number to be guessed is smaller than that.\n";
        			}
				}
				chances--;
				cout<<"You have only "<<chances<<" chances left \n";
				if (chances == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< ran_num
							<< ", You lose!!\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
				}
    		}
		}
		if(diffi_level==2){
			int chances=8;
			cout<<"You got "<<chances<<" chances.\n";
			for(int i=1;i<=8;i++){
        		cout<<"Enter the guessed number : ";
        		cin>>guess_num;
        		if(guess_num==ran_num){
            		cout<<"Comgratulations!!, You guessed it right.\n";
            		cout<<"The number is : \n";
            		cout<<" "<<guess_num<<"\n";
            		break;
        		}
				else{
					if(guess_num<ran_num){
            		cout<<guess_num<<" is not the right guess.\n";
            		cout<<"The number to be guessed is greater than that.\n";
        			}
        			else{
            		cout<<guess_num<<" is not the right guess.\n";
            		cout<<"The number to be guessed is smaller than that.\n";
        			}
				}
				chances--;
				cout<<"You have only "<<chances<<" chances left \n";
				if (chances == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< ran_num
							<< ", You lose!!\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
				}
    		}
		}
		if(diffi_level==3){
			int chances=5;
			cout<<"You got "<<chances<<" chances.\n";
			for(int i=1;i<=5;i++){
        		cout<<"Enter the guessed number : ";
        		cin>>guess_num;
       	 		if(guess_num==ran_num){
            		cout<<"Comgratulations!!, You guessed it right.\n";
            		cout<<"The number is : \n";
            		cout<<" "<<guess_num<<"\n";
            		break;
        		}
				else{
					if(guess_num<ran_num){
            		cout<<guess_num<<" is not the right guess.\n";
            		cout<<"The number to be guessed is greater than that.\n";
        			}
        			else{
            		cout<<guess_num<<" is not the right guess.\n";
            		cout<<"The number to be guessed is smaller than that.\n";
        			}
				}
				chances--;
				cout<<"You have only "<<chances<<" chances left \n";
				if (chances == 0) {
						cout << "You couldn't find the "
								"secret number, it was "
							<< ran_num
							<< ", You lose!!\n\n";
						cout << "Play the game again to "
								"win!!!\n\n";
				}
    		}
		}
	}
    return 0;
}



