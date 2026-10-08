#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct Node{
    int key;
    struct Node* next;// point to the next element of the current element
}Node;

Node* h = NULL;

Node*makeNode(int v){
    Node* p = (Node*)malloc(sizeof(Node));
    p->key = v; p->next = NULL;
    return p;
}

Node* insertLast(Node* h, int v){
    if(h == NULL){
        return makeNode(v);
    }
    h->next = insertLast(h->next, v);
    return h;
}

Node* find(Node* h, int k){
    for(Node* p = h; p != NULL; p = p->next){
        if(p->key == k) return p;
    }
    return NULL;
}

void print(Node* h){
    Node* p = h;
    while(p != NULL){
        printf("%d ",p->key);
        p = p->next;
    }
    printf("\n");
}

Node* removeNode(Node* h, int v){
if (h == NULL) return NULL;
    if (h->key == v) {
        Node* tmp = h->next;
        free(h);
        return tmp;
    }
    h->next = removeNode(h->next, v);
    return h;
}

Node* reverse(Node *h){
Node* prev = NULL;
    Node* curr = h;
    Node* next = NULL;
    while (curr != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* addFirst(Node* h, int v){
if (find(h, v) != NULL) return h;
    Node* p = makeNode(v);
    p->next = h;
    return p;
}

Node* addBefore(Node* h, int u, int v){
if (find(h, u) != NULL) return h;
    if (h == NULL) return h;
    if (h->key == v) {
        Node* pU = makeNode(u);
        pU->next = h;
        return pU;
    }
    Node* p = h;
    while (p->next != NULL && p->next->key != v) {
        p = p->next;
    }
    if (p->next != NULL) {
        Node* pU = makeNode(u);
        pU->next = p->next;
        p->next = pU;
    }
    return h;
}

Node* addAfter(Node* h, int u, int v){
if (find(h, u) != NULL) return h;
    Node* pV = find(h, v);
    if (pV == NULL) return h;
    Node* pU = makeNode(u);
    pU->next = pV->next;
    pV->next = pU;
    return h;
}

void solve(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        int k;
        scanf("%d",&k);
        h = insertLast(h,k);
    }
    while(1){
        char cmd[256];
        scanf("%s",cmd);

        if(strcmp(cmd,"#") == 0) break;

        if(strcmp(cmd,"addlast") == 0){
            int k;    scanf("%d",&k);
            if(find(h,k) == NULL)  h = insertLast(h,k);
        }else if(strcmp(cmd,"addfirst") == 0){
            int k;    scanf("%d",&k);
            if(find(h,k) == NULL)   h = addFirst(h,k);
        }else if(strcmp(cmd,"addafter") == 0){
            int u, v; scanf("%d%d",&u,&v);
            if(find(h,u) == NULL)   h = addAfter(h,u,v);
        }else if(strcmp(cmd,"addbefore") == 0){
            int u, v; scanf("%d%d",&u,&v);
            if(find(h,u) == NULL)   h = addBefore(h,u,v);
        }else if(strcmp(cmd,"remove") == 0){
            int k; scanf("%d",&k);
            h = removeNode(h,k);
        }else if(strcmp(cmd,"reverse") == 0){
            h = reverse(h);
        }
    }

}

int main(){
    solve();
    print(h);
    return 0;
}

