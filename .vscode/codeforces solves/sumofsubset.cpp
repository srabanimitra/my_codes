#include <iostream>
#include <stack>

using namespace std;

int set[] = {2,1,4,3};
int numberOfElements = 4, sum = 5;

class SubSet{
public:
  stack<int> solutionSet;
  bool hasSolution;

  void solve(int s, int idx){           //s initial

    //return if s exceed sum
    if(s>sum)
        return;

    //check if stack has the right subsets of numbers
    if(s==sum){
        hasSolution = true;
        //display stack contents
        displaySolutionSet();
        //Though found a solution but deliberately
        //returning to find more
        return;
    }


    for(int i=idx; i<numberOfElements; i++){
        //Adding element to the stack
        solutionSet.push(set[i]);

        //add set[i] to the 's' and recusively start from next number
        solve(s+set[i],i+1);

        //Removing element from stack i.e Backtracking
        solutionSet.pop();
    }
  }

  //Function to display stack content
  void displaySolutionSet(){
        stack<int> temp;

        while (!solutionSet.empty())
        {
            cout <<  solutionSet.top() << " ";
            temp.push(solutionSet.top());
            solutionSet.pop();
        }
        cout << '\n';
        while (!temp.empty())
        {
            solutionSet.push(temp.top());
            temp.pop();
        }
    }
};

int main()
{
    SubSet ss;
    ss.solve(0,0);

	if(ss.hasSolution == false)
	    cout << "No Solution";

    return 0;
}
