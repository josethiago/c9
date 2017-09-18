#include <iostream>  
#include <queue> 
#include <cmath>
#define N 110
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
      int n;
        int x[N];
        int y[N];
        int r[N];
      
    struct CompareNode : public std::binary_function<Node*, Node*, bool>                                                                                       
    {  
      bool operator()(const Node* lhs, const Node* rhs) const  
      {  
         return lhs->value > rhs->value;  
      }  
    };  
      
      int dist2(int i, int j){
         return (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);    
      }
      
    int main()  
    {     
        priority_queue<Node*, vector<Node*>, CompareNode > pq;  
        
  
        double d[N];
        int proc[N];
        
        while(1) {
            cin >> n;
        //    cout << n << endl;
            if(n==0) break;      
    
            for(int i=0; i<n; i++) {
              cin >> x[i] >> y[i] >> r[i];
              //cout << x[i] <<" "<< y[i] <<" " << r[i] <<endl;
             
              d[i] = -1;
              proc[i] = 0;
            }
      
            int q;
            cin >> q;
            
            for (int i=0; i<q; i++) {
            for(int j = 0; j<n; j++) {
              d[j] = -1;
              proc[j] = 0;

            }
           // cout << q <<endl;
            int origem, destino;
            cin >> origem >> destino;
         //   cout << origem <<" "<< destino<<endl;
            
            origem--; destino--;
            d[origem] = 0;
            pq.push( new Node(origem, d[origem]) ); 

            while ( !pq.empty() )  {
                Node* no = pq.top();
                pq.pop();
                int id = no->id;
              //  cout << "Proc "<<id+1<<endl;
                delete no;
                if(!proc[id]) {
                    proc[id] = 1;
                    for(int j = 0; j<n; j++) {
                        if(j != id) {
                            if(dist2(id,j)<r[id]*r[id]) { //id manda para j
                                if(d[j]==-1 || (d[j] > d[id]+sqrt(dist2(id,j))+EPS )) {//melhora?
                                    d[j] = d[id]+sqrt(dist2(id,j));
                                 //   cout << j+1 <<" better with "<<d[j]<<endl;
                                    pq.push( new Node(j, d[j]) ); 
                                }
                            }   
                        }
                    }
                }
        
            }
            cout << (int)d[destino] <<endl;
        }
        }
    }
 