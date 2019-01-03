#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int r,g,b;
	double R=0,G=0,B=0;
	int c,m,y,k;
	int resultado,op,max;
	
	cout<<"Informe a opção:"<<endl<<"1- RGB para CMYK"<<endl<<"2- CMYK para RGB"<<endl<<"opção:";
	cin>>op;
	
	if(op==1){
		cout<<"informe R:";
		cin>>r;
		cout<<"informe G:";
		cin>>g;
		cout<<"informe B:";
		cin>>b;
		max=0;
		
		cout<<"r:"<<r<<endl;
	    R = double (r / 255);
	    G = double (g / 255);
	    B = double (b / 255);
	    
		cout<<"r:"<<r<<endl;
		
		cout<<"R:"<<R<<endl;
		R=max;
		cout<<"Max:"<<max<<endl;
		
		if(G>max){
			G=max;
		}
		if(B>max){
			B=max; 
		}
		
		k = 1 - max;

		c = (1 - R - k) / (1 - k);
		m = (1 - G - k) / (1 - k);
		y = (1 - B - k) / (1 - k);
		cout<<"CMYK=["<<c<<m<<y<<k<<"]"<<endl;
	}
		if(op==2){
			
			r = 255 * (1 - c) * (1 - k );
			g = 255 * (1 - m) * (1 - k);
			b = 255 * (1 - y) * (1 - k);
		cout<<"RGB=["<<r<<g<<b<<"]"<<endl;
	}
	
	
	
	
	
	
	return(0);
}
