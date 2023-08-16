#include <iostream>
#include <vector>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string codeword = "snake";
	string answer = "-----";
	
	int misses;
	vector<char>incorrect;
	bool guess = false ;
	char letter;
	
	cout<<"=====*****=====*****=====*****====="<<endl;
	cout<<"WELCOME TO HANGMAN GAME"<<endl;
	cout<<"====*****=====*****=====*****====="<<endl;
	cout<<"  INSTRUCTIONS: Save your friend from being hanged by guessing the correct letters which will be chosen  "<<endl;
	
	
	
	
	while(answer!=codeword && misses<5)
	{
		if(misses==0)
	{
		cout<<"   +----+   "<<endl;
		cout<<"   |    |   "<<endl;
		cout<<"        |   "<<endl;
		cout<<"        |   "<<endl;
		cout<<"        |   "<<endl;
		cout<<"        |   "<<endl;
		cout<<"        |   "<<endl;
		cout<<"==============="<<endl;	
	}

		if(misses==1)
	      {
		cout<<endl<<"   +----+   "<<endl;
		cout<<"   |    |   "<<endl;
		cout<<"   O    |   "<<endl;
		cout<<"        |   "<<endl;
		cout<<"        |   "<<endl;
		cout<<"        |   "<<endl;
		cout<<"        |   "<<endl;
		cout<<"==============="<<endl;	
	       }
	    else if(misses==2)
	       {
		cout<<endl<<"  +----+   "<<endl;
		cout<<"  |    |   "<<endl;
		cout<<"  O    |   "<<endl;
		cout<<" /|\   |   "<<endl;
		cout<<"       |   "<<endl;
		cout<<"       |   "<<endl;
		cout<<"       |   "<<endl;
		cout<<"=============="<<endl;	
	      }
      	else if(misses==3)
      	  {
      	cout<<endl<<"   +----+   "<<endl;
		cout<<"   |    |   "<<endl;
		cout<<"   O    |   "<<endl;
		cout<<"  /|\\  |   "<<endl;
		cout<<"  /     |   "<<endl;
		cout<<"        |   "<<endl;
		cout<<"        |   "<<endl;
		cout<<"  ==========="<<endl;	
		  }
	    else if(misses==4)
	     {
		cout<<endl<<"   +----+  "<<endl;
		cout<<"   |    |  "<<endl;
		cout<<"   O    |  "<<endl;
		cout<<"  /|\\  |  "<<endl;
		cout<<"  / \\  |  "<<endl;
		cout<<"        |  "<<endl;
		cout<<"        |  "<<endl;
		cout<<"  ========== "<<endl;
		  }
		  cout<<"Incorrect Guesses:"<<endl;
	
	
	for(int i=0;i<incorrect.size();i++)
	{
		cout<<incorrect[i]<<" ";
	}
		
	cout<<endl<<"Codeword:"<<endl;
	  
	   for(int i =0;i<answer.length();i++)
	   {
		cout<<answer[i]<<"  ";
		}
		
	    cout<<endl<<"Please enter your guess"<<endl;
	     cin>>letter;
	     
	 for(int i=0;i<codeword.length();i++)
	 {
		if (letter==codeword[i])
		{
			answer[i]=letter;
			guess = true;
		}
	 }
		if(guess)
	   {
		cout<<endl<<"   Correct!   "<<endl;
	   }
	else 
	   {
		cout<<endl<<"   Incorrect! Another portion of the person has been drawn.   "<<endl;
		incorrect.push_back(letter);
		misses++;	
	     }
		guess = false;	
    }
	
		//end of the display

	if (answer==codeword)
	{
		cout<<"  AMAZING!!! You saved the person from being hanged  "<<endl;
		cout<<"========*****=====*****========"<<endl;
		cout<<"  CONGRATULATION YOU WON  "<<endl;
		cout<<"========*****=====*****========";
	}
	else
	{
		cout<<"  SO SAD!!! The man is hanged  "<<endl;
		cout<<"=====*****=====*****====="<<endl;
		cout<<"     YOU LOST  "<<endl;
		cout<<"=====*****=====*****=====";
	}
	
	return 0;
}
