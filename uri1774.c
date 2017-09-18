#include <stdio.h>
#include <stdlib.h>

int r, c, mat[203][203], rep[203], rank[203], i, j, a, b, p, s=0;

typedef struct aresta_s {
    int u, v;
    int peso;
} aresta;

aresta arestas[20010];

int comparetor (const void * a, const void * b)
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
    
    scanf(" %d %d", &r, &c);
    for(i=0;i<c;i++){
    
        scanf(" %d %d %d", &a, &b, &p);
        mat[a][b] = p;
        arestas[i].u = a;
        arestas[i].v = b;
        arestas[i].peso = p;
        make_set(i);
    }
 
    qsort (arestas, c, sizeof(struct aresta_s), comparetor);
    for(i=0; i<c; i++) {
        
        w = find(arestas[i].u);
        z = find(arestas[i].v);
        if(w!=z){
            uniao(w,z);
            s+=arestas[i].peso;
        }
    }
    printf("%d\n", s);
}

