#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
class INSMem
{
      public:
          ifstream Instruction;
           INSMem()
          {       IMem.resize(MemSize); 
                  ifstream insmem;
                  string line;
                  int i=0;
                  insmem.open("insmem.txt");
                  if (insmem.is_open())
					{
                  while (getline(insmem, line))
                     {      
                        IMem[i] = bitset<8>(line);
                        i++;
                     }
                  }
                  else cout<<"Unable to open file";
                  insmem.close();			   
                  }

};
				 
                  
int main() {
    INSMem myInsMem;	 
	int PC =0;
	bitset<32> programCounter;
	bitset<5> ReadReg1;
	bitset<5> ReadReg2;
	bitset<5> WriteReg;
	bitset<6> AluOperation;
	bitset<6> opcode;
	bitset<1> WriteEnable;
	bitset<32> Writedata;
	string SignImmediate;
	bitset<32> SImm;









    
    return 0;
}
