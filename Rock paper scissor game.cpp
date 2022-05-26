//Name: Muhammad Ahmed
//Reg no: 210555
//Class: BEME-F-21-B


#include <iostream>
using namespace std;

int main()
{
    char p1,p2,choice;
    do{
    cout<<"Game Rock Paper Scissor"<<endl;
    cout<<"_______________________"<<endl;
    cout<<"Player 1 turn"<<endl;
    cout<<"Enter p for rock\n";
	cout<<"Enter s for scissor\n";
	cout<<"Enter x for paper\n";
    cin>>p1;
    cout<<"Player 2 turn"<<endl;
    cout<<"Enter p for rock\n";
	cout<<"Enter s for scissor\n";
	cout<<"Enter x for paper\n";
    cin>>p2;
    cout<<"_______________________"<<endl;
    
    switch(p1)
    {
        case 'x':
            switch(p2)
            {
            case 'p':
            cout<<"Player 1 wins";
            break;
            
            case 's':
            cout<<"Player 2 wins";
            break;
            
            case 'x':
            cout<<"Draw";
            break;
            
            }
        break;
        
        case 'p':
            switch(p2)
            {
            case 'x':
            cout<<"Player 2 wins";
            break;
            
            case 's':
            cout<<"Player 1 wins";
            break;
            
            case 'p':
            cout<<"Draw";
            break;
            
            }
        break;
        
        case 's':
            switch(p2)
            {
            case 'x':
            cout<<"Player 1 wins";
            break;
            
            case 'p':
            cout<<"Player 2 wins";
            break;
            
            case 's':
            cout<<"Draw";
            break;
            
            }
        break;
        
    }
    cout<<"\nDo you want to play again?"<<endl;
    cout<<"Press any key to continue"<<endl;
    cout<<"Press e to exit"<<endl;
    cin>>choice;
	}
	while(choice!='e');
	{
		cout<<"Game ends";
	}
    return 0;
}
