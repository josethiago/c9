#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int r, c, rep[20010], rank[20010], i, j, a, b, s=0, n, x[20010], y[20010], m, f;
double tot;

typedef struct aresta_s {
    int u, v;
    double peso;
} aresta;

aresta arestas[250100];

int comparetor(const void * a, const void * b)
{
    aresta* aa = (aresta*) a;
    aresta* bb = (aresta*) b;
    return  (*aa).peso - bb->peso ;
    
}
void make_set(int v){
    rep[v]=v;
    rank[v]=0;
}

void link (int w, int z){
    if(rank[w]<rank[z]){
        rep[w]=z;
    }
    else if(rank[z]<rank[w]){
        rep[z]=w;
    }
    else{
        rep[z]=w;
        rank[w]++;
    }
    
}
int find(int v){
    if(rep[v]==v){
        return v;   
    }
    else{
    rep[v] = find(rep[v]);
    return rep[v];
    }
}
void uniao(int v, int u){
    
    int w = find(v);
    int z = find(u);
    link(w,z);
}    

int main(){
    int w,z;
    
    scanf(" %d", &c);
    for(f=0;f<c;f++){
        scanf(" %d", &n);
        for(i=0;i<n;i++){
            scanf(" %d %d", &x[i], &y[i]);
            make_set(i);
        }
        s=0;
        m=0;
        tot=0.0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                s = pow((x[i]-x[j]),2) + pow((y[i]-y[j]),2); 
                arestas[m].u = i;
                arestas[m].v = j;
                arestas[m++].peso=s;
            }
        }
     
        qsort (arestas, m, sizeof(struct aresta_s), comparetor);
        for(i=0;i<m;i++) {
            w = find(arestas[i].u);
            z = find(arestas[i].v);
            if(w!=z){
                uniao(w,z);
                tot+=sqrt(arestas[i].peso);
            }
        }
        printf("%.2f\n", tot/100.0);
    }
}

