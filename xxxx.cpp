    #include<bits/stdc++.h>
    using namespace std;

/*                           */
    int main(){
    	int n , sum;
    	cin>>n>>sum;
    	if(sum==0 && n==1){
    		cout<<"0 0"<<endl;
    		return 0;
    	}
    	if(sum == 0 || sum>9*n){
    		cout<<"-1 -1"<<endl;
    		return 0;
    	}
    	string bilmax="" , bilmin="";
    	int temp = sum;
    	for(int i=1;i<=n;i++){
    		if(temp > 9){
    			temp-=9;
    			bilmax+=(9+'0');
    		}
    		else if(temp > 0){
    			bilmax+=(temp+'0');
    			temp = 0;
    		}
    		else bilmax+='0';
    	}
    	temp = sum;
    	for(int i=1;i<=n;i++){
    		if(temp > 9){
    			temp-=9;
    			bilmin+=(9+'0');
    		}
    		else if(temp>1){
    			if(i!=n){
    				bilmin+=(temp-1+'0');
    				temp = 1;
    			}
    			else bilmin+=(temp+'0');
    		}
    		else{
    			if(i!=n)bilmin+='0';
    			else bilmin+='1';
    		}
    	}
    	reverse(bilmin.begin() , bilmin.end());
    	cout<<bilmin<<" "<<bilmax<<endl;

    }
