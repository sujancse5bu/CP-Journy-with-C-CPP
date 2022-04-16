

#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli sett ();
lli uset ();
lli iset ();
lli dset ();
lli cset ();
lli prst ();
lli Dmrgn ();
int main ()
{
    sett ();
    return 0;
}


lli sett ()
{
    lli ii;
    set1:
    printf ("\n     Set\n\n   1. Union of two sets.");
    printf ("\n   2. Intersection of two sets.");
    printf ("\n   3. Difference between two sets.");
    printf ("\n   4. Cartesian Product.");
    printf ("\n   5. Power Set.");
    printf ("\n   6. De Morgan's Law.");
    printf ("\n    7. End Program.");
    printf("\n\n   Please enter an index from above : ");
    scanf ("%lld",&ii);
    if (ii==1) uset ();
    else if (ii==2) iset ();
    else if (ii==3) dset ();
    else if (ii==4) cset ();
    else if (ii==5) prst ();
    else if (ii==6) Dmrgn();
    else if (ii==7) 
	{
		return 0;
		cout<<"       Thanks"<<endl;
	}
    else
    {
        printf ("\n   Invalid selection.");
        goto set1;
    }
}
lli uset ()
{
    lli ii,la,lb,d,i,j,k,x[100000],s[100000];
    vector <string> a,b;
    string c;
    printf ("\n    Union of two sets.\n");
    settt:

    printf("    Please enter the number of element of first set: ");
    cin>>la;
    a.resize(la);
    printf("    Please enter the elements of first set with space: ");
    for (int i=0;i<la;i++) cin>>a[i];
    printf("    Please enter the number of element of last set: ");
    cin>>lb;
    b.resize(lb);
    printf("    Please enter the elements of first set with space: ");
    for (int i=0;i<lb;i++) cin>>b[i];
    for (int i=0;i<la;i++)
    {
        for(int j=0;j<lb;j++)
        {
            if (b[j]==a[i]) b[j]=" ";

        }
    }
    cout<<"The union of these sets= {";
    for(int j=0;j<lb;j++) if (b[j]!=" ") cout<<b[j]<<",";
    for(int j=0;j<la;j++) if (j!=la-1) cout<<a[j]<<",";
    else cout<<a[j]<<'}'<<endl<<endl<<"          Thanks"<<endl;
    return 0;
}
lli iset ()
{
    lli ii,la,lb,d,i,j,k;
    vector <string> a,b,c;
    printf ("\n    Intersection of two sets.\n");
    settt:

    printf("    Please enter the number of element of first set: ");
    cin>>la;
    a.resize(la);
    printf("    Please enter the elements of first set with space: ");
    for (int i=0;i<la;i++) cin>>a[i];
    printf("    Please enter the number of element of last set: ");
    cin>>lb;
    b.resize(lb);
    printf("    Please enter the elements of first set with space: ");
    for (int i=0;i<lb;i++) cin>>b[i];
    for (int i=0;i<la;i++) for(int j=0;j<lb;j++) if (b[j]!=" " && a[i]==b[j]) c.push_back(a[i]);
    cout<<"The Intersection of these sets= {";
    k=c.size();
    if (k==0) cout<<"}"<<endl;
    else
    {
        for(int i=0;i<k;i++) if (i!=k-1) cout<<c[i]<<',';
        else cout<<c[i]<<'}'<<endl<<endl<<"          Thanks"<<endl;
    }
    return 0;
}

lli dset ()
{
    lli ii,la,lb,d,i,j,k;
    vector <string> a,b,c;
    printf ("\n    Difference between two sets.\n");
    printf("    Please enter the number of element of first set: ");
    cin>>la;
    a.resize(la);
    printf("    Please enter the elements of first set with space: ");
    for (int i=0;i<la;i++) cin>>a[i];
    printf("    Please enter the number of element of last set: ");
    cin>>lb;
    b.resize(lb);
    printf("    Please enter the elements of first set with space: ");
    for (int i=0;i<lb;i++) cin>>b[i];
    for (int i=0;i<la;i++) for(int j=0;j<lb;j++) if (a[i]==b[j]) a[i]=" ";
    cout<<"The Difference between these sets= {";
    for (int i=0;i<la;i++) if (a[i]!=" ") c.push_back(a[i]);
    k=c.size();
    if (k==0) cout<<"}"<<endl;
    else
    {
        for(int i=0;i<k;i++) if (i!=k-1) cout<<a[i]<<',';
        else cout<<c[i]<<'}'<<endl<<endl<<"          Thanks"<<endl;
    }
    return 0;
}

lli cset ()
{
    lli ii,la,lb,d,i,j,k;
    vector <string> a,b,c;
    printf ("\n    Cartesian Product.");
    printf ("\n    These sets shouldn't be empty.");
    printf("\n    Please enter the number of element of first set: ");
    cin>>la;
    a.resize(la);
    printf("    Please enter the elements of first set with space: ");
    for (int i=0;i<la;i++) cin>>a[i];
    printf("    Please enter the number of element of last set: ");
    cin>>lb;
    b.resize(lb);
    printf("    Please enter the elements of first set with space: ");
    for (int i=0;i<lb;i++) cin>>b[i];
    cout<<"  The Cartesian Product: {";
    for (int i=0;i<la;i++) for(int j=0;j<lb;j++) if (j==lb-1 && i==la-1) cout<<"("<<a[i]<<','<<b[i]<<")}"<<endl<<"      Thanks"<<endl;
    else cout<<"("<<a[i]<<","<<b[i]<<"),";
    return 0;
}


lli prst ()//Curtecy Sourav Malo
{
    lli ii,i,j,la,lb,d,k;
    vector <char> a,c;
    vector <string> b,e;
    printf ("\n    Power set.\n");
    printf("    Please enter the number of element of the set: ");
    cin>>la;
    b.resize(la);
    cout<<"    Please enter the elements of the set with spaces: ";
    for (i=0;i<la;i++) cin>>b[i];
    la=pow(2,la);
    a.push_back('0');
    cout<<"   The Power Set: {{}";
    for (i=1;i<la;i++)
    {
        k=0;
        if (e.size()>0) e.clear();
        for (j=0;j<a.size();j++)
        {
            if (a[j]=='0')
            {
                a[j]='1';
                k=0;
                break;
            }
            else
            {
                a[j]='0';
                k=1;
            }
        }
        if (k>0) a.push_back('1');
        cout<<",{";
        for (j=0;j<a.size();j++) if (a[j]=='1') e.push_back(b[j]);
        k=e.size();
        for (j=0;j<k;j++) if (j==k-1) cout<<e[j];
        else cout<<e[j]<<',';
        cout<<'}';
    }
    cout<<"}."<<endl<<"            Thanks."<<endl;
    return 0;
}
lli Dmrgn ()
{
	cout<<"  Proof of De Morgan's Law."<<endl;
	cout<<"  1.(A+B+C)'=A'.B'.C'"<<endl;
	cout<<"  2.(A.B.C)'=A'+B'+C'"<<endl<<endl;	
	printf ("  1   2   3      4       5      6   7   8      9         10       11         12\n");
	printf ("  A   B   C   (A+B+C) (A+B+C)'  A'  B'  C'  A'.B'.C'    A.B.C   (A.B.C)'  A'+B'+C'\n");
	printf ("  0   0   0      0       1      1   1   1      1          0        1         1\n");	
	printf ("  0   0   1      1       0      1   1   0      0          0        1         1\n");
	printf ("  0   1   0      1       0      1   0   1      0          0        1         1\n");
	printf ("  0   1   1      1       0      1   0   0      0          0        1         1\n");
	printf ("  1   0   0      1       0      0   1   1      0          0        1         1\n");
	printf ("  1   0   1      1       0      0   1   0      0          0        1         1\n");
	printf ("  1   1   0      1       0      0   0   1      0          0        1         1\n");
	printf ("  1   1   1      1       0      0   0   0      0          1        0         0\n");
	cout<<endl<<"  Column 5 & 9 prove that (A+B+C)'=A'.B'.C'"<<endl;
	cout<<"  Column 11 & 12 prove that (A.B.C)'=A'+B'+C'"<<endl<<endl;
	cout<<"      Thanks."<<endl;
    return 0;
}



