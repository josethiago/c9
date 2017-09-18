#include <iostream>  
#include <queue> 
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <string>
#include <sstream>
#define M 10005
#define EPS 0.000000001
using namespace std;  
      
class Node  
{  
    public:  
    
    double value; 
    int id;
  
    Node(int i, int v) {
        value = v;
        id = i;
    }  
    
};  



int n, s, i=0, c;
int x[M];
int y[M];
int line[M];
double d[M]; 
double tot;
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
    
    int l = 0;
    cin >> n;
    for(int k=0;k<n;k++){
        cout << endl;
        i = 0;
        cin >> x[i] >> y[i];
        d[i] = -1;
        proc[i] = 0;
        line[0]=0;
        cout << i <<" "<<x[i]<<" "<<y[i]<<" "<<line[i]<<endl;
        i++;
        cin >> x[i] >> y[i];
        d[i] = -1;
        proc[i] = 0;
        line[1]=1;
        cout << i <<" "<<x[i]<<" "<<y[i]<<" "<<line[i]<<endl;
        i++;
        
        l = 2;
           string name;
            getline (std::cin,name);
            const char* name1;
        while(1) {
            getline (std::cin,name);
            if(name.empty()) {
               break; 
            }
            else {
              name1 =  name.c_str();
              while(1) {
                sscanf(name1,"%d %d", &x[i], &y[i]);
                line[i] = l;
                if(x[i]==-1 && y[i]==-1) {
                   l++;
                   break;
               }
                d[i] = -1;
                proc[i] = 0;
                cout << i <<" "<<x[i]<<" "<<y[i]<<" "<<line[i]<<endl;
                i++;
              }
            }
        }
        int numV = i;
       
        d[0]=0;
        pq.push( new Node(0, d[0]) );
         
        while ( !pq.empty() )  {
            Node* no = pq.top();
            pq.pop();
            int id = no->id;
            delete no;
            cout << id <<" "<<no->value<<endl;
            if(!proc[id]) {
                proc[id] = 1;
                for(int j = 0; j<numV; j++) {
                    if(j != id && !proc[j]) {
                             if(line[j] != line[i]) {//walk
                                 if(d[j]==-1 || d[j]>d[id]+sqrt(dist2(id,j))/10+EPS) {
                                 d[j] = d[id]+sqrt(dist2(id,j))/10;
                                 pq.push(new Node(j, d[j]));
                                 }
                             }
                             else {// j is a station in the same line
                                 if(d[j]==-1 || d[j]>d[id]+sqrt(dist2(id,j))/40+EPS) {
                                 d[j] = d[id]+sqrt(dist2(id,j))/40;
                                 pq.push(new Node(j, d[j]));
                                 }
                                 
                             }
                         
                        
                    }  
                    }
                }
        }
      cout << d[1] << "\n";
    }
}

 