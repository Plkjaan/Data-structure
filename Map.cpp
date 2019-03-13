/* wriet a program for no of students who have passed or fail using mapping 
 * roll no;
 * score;
 * passing criteria
 * perinting result*/
#include<iostream>
#include<map>
using namespace std;
typedef map<int ,int> Student;

int main()

{
	int n=10;
	int pass=250;
	int roll[]={101,102,103,104,105,106,107,108,109,110};
	int score[]={380,250,402,221,331,321,352,128,365,410};
	cout<<" roall no with score "<<endl;
	Student roll_score;
	for(int j=0; j<n; j++)
	{
	roll_score[roll[j]]=score[j];
	}
	/*roll_score [101] =380;	
	roll_score [102] =350;
	roll_score [103] =299;	
	roll_score [104] =289;
	roll_score [105] =323;	
	roll_score [106] =300;
	roll_score [107] =381;	
	roll_score [108] =305;	
	roll_score [109] =390;	
	roll_score [110] =351;*/
	for(Student::iterator it=roll_score.begin();it!=roll_score.end();++it)
		cout<<it->first<<" = "<<it->second<<"\n";
	for(int k=0; k<n; k++)
//	for(Student:: iterator it=roll_score.begin() ;it!=roll_score.end(); ++it)    //250 is passing marks
	{
		if(score[k]>pass)
			cout<<" Passed students are "<<roll[k]<<" having marks "<<score[k]<<"\n";
		
	}
		

	return 0;
}
