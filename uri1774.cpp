#include <iostream>  
#include <queue> 
#include <cmath>
#include <stdio.h>
#include <iomanip>
#define M 10005
#define EPS 0.0000001
using namespace std;  
      
class Node  
{  
    public:  
    
    int value; 
    int id;
  
    Node(int i, int v) {
        value = v;
        id = i;
    }  
    
};  



int n, s;
double x[M];
double y[M];
double d[M], tot;
int proc[M];
    

unsigned long long int dist2(unsigned long long i, unsigned long long int j){
         return (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);    
    
}
  
struct CompareNode : public std::binary_function<Node*, Node*, bool>{  
    bool operator()(const Node* lhs, const Node* rhs) const {  
        return lhs->value > rhs->value;  
    }  
};  
      
int main()  {     
    priority_queue<Node*, vector<Node*>, CompareNode > pq;  
    
    
    cin >> n;
    for(int k=0;k<n;k++){
        int q;
        cin >> q;
        
        for(int i=0; i<q; i++) {
            cin >> x[i] >> y[i];
            d[i] = -1;
            proc[i] = 0;
           
        }
        d[0]=0;
        pq.push( new Node(0, d[0]) );
        tot=0;
         
        while ( !pq.empty() )  {
            Node* no = pq.top();
            pq.pop();
            int id = no->id;
            delete no;
            if(!proc[id]) {
                proc[id] = 1;
                tot+=d[id];
                for(int j = 0; j<q; j++) {
                    if(j != id && !proc[j]) {
                        if(d[j]==-1 || (d[j] > sqrt(dist2(id,j)+EPS ))) {//melhora?
                        d[j] = sqrt(dist2(id,j));
                        
                        pq.push( new Node(j, d[j]) ); 
                        
                        }   
                    }
                }
            }
        }
    cout << fixed << setprecision(2) << tot/100 << "\n";
    }
}

 