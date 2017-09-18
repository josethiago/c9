#include <iostream>  
#include <queue> 
#include <cmath>
#define N 50006
#define EPS 0.00001
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
    int c;
    int lista[N][N];
    int x;
    int y;
    int r;
    int v;
    int d[N];
      
    struct CompareNode : public binary_function<Node*, Node*, bool>                                                                                       
    {  
      bool operator()(const Node* lhs, const Node* rhs) const  
      {  
         return lhs->value > rhs->value;  
      }  
    };  
      
    int dist2(int i, int j){
        return (x[i]-x[j])*(x[i]-x[j]) + (y[i]-y[j])*(y[i]-y[j]);    
    }
int main()  {     
        
    priority_queue<Node*, vector<Node*>, CompareNode > pq;  
    
    int proc[N];
    
    cin >> c >> v;
    
        //cout << n << endl;
      
        for(int i=0; i<v; i++){
            for(int j=0; j<c;j++){
            lista[i][j]=UNDEF;
        }

        for(int i=0; i<v; i++) {
            cin >> x >> y >> r;
            //cout << x[i] <<" "<< y[i] <<" " << r[i] <<endl;
            lista[x][y]=r;
            d[i] = -1;
            proc[i] = 0;
        }
            
        for (int i=0; i<q; i++) {
            //cout << q <<endl;
            int origem=0, destino=c;
            //cout << origem <<" "<< destino<<endl;
            destino--;
            d[origem] = 0;
            pq.push( new Node(origem, d[origem]) ); 
            while ( !pq.empty() )  {
                Node* no = pq.top();
                pq.pop();
                int id = no->id;
                //cout << "Proc "<<id+1<<endl;
                delete no;
                if(!proc[id]) {
                    proc[id] = 1;
                    for(int j = 0; j<n; j++) {
                        if(j != id) {
                            if(d[j]==-1 || d[j] > (d[id]+EPS )) {//melhora?
                                    d[j] = d[id]+EPS;
                                    //cout << j+1 <<" better with "<<d[j]<<endl;
                                    pq.push( new Node(j, d[j]) ); 
                            }
                        }
                    }
                }
        
            }
            
            cout << (int)d[destino] <<endl;
        }
    }
}
    
 