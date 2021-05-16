#include "MyDir.h"

void initDir(MyDir& D, const string& n)
{
	D.name=n;
	D.subDir=nullptr;
	D.size=0;
}

void printDir(MyDir D)
{
	int x=0;
	if(D.subDir==NULL)
	{
		
		for(int i=0;i<2*x+1;i++)
			cout<<"-";
		cout<<"> "<<D.name<<"/"<<endl;
	}
	else
	{
		for(int j=0;j<D.size;j++)
		{
			printDir(*D.subDir[j]);
		}
		x++;
	}
}

MyDir* addDir(MyDir& D, const string& n)
{
	if(n.size()>10)
	{
		cout<<"Too long name: "<<n<<endl;
		return NULL;
	}
	else
	{
		MyDir * newDir = new MyDir;
    	MyDir ** temp = D.subDir;
    
    	D.subDir = new  MyDir* [D.size +1]; 
    	for (int i = 0; i < D.size; i++)
		{
      		D.subDir[i] = temp[i];
    	}
    	D.subDir[D.size] = newDir;
    	D.size ++;
    	delete[] temp;
    	initDir(*newDir,n);
    	return newDir;
	}
}

void addDir (MyDir & D, MyDir & S)
{
  MyDir ** temp = S.subDir;
    
    D.subDir = new  MyDir* [D.size +1]; 
    for (int i = 0; i < D.size; i++)
	{
      S.subDir[i] = temp[i];
    }
    D.subDir[S.size] = &S;
    D.size ++;
    delete[] temp;
}

void clearDir (MyDir & D)
{
  if(D.subDir != NULL)
  {
    for(int i = 0; i < D.size; i++)
    clearDir(*D.subDir[i]);
    delete[] D.subDir;
    delete [] &D;
  }
  else{
    delete &D;
  }

}