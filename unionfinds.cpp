#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

class UnionFind{
    private:

    vi p,rank,setSize;

    int numSets;

    public:
        UnionFind(int N){
            setSize.assign(N,1);numSets = N;rank.assign(N,0);

            p.assign(N,0);

            for(int i=0;i<N;i++)
            {
                p[i]=i;
            }
        }
            int findSet(int i){
                return (p[i]==i)?i:(p[i] = findSet(p[i]));
            }
            bool isSameSet(int i,int j)
            {
                return findSet(i)==findSet(j);
            }
            void unionSet(int i,int j)
            {
                if(!isSameSet(i,j))
                {
                    numSets--;
                    int x = findSet(i),y = findSet(j);

                    if(rank[x]>rank[y])
                       {
                           p[y]=x;setSize[x]+=setSize[y];
                       }
                       else{
                        p[x]=y;setSize[y]+=setSize[x];
                        if(rank[x]==rank[y])
                        {
                            rank[y]++;
                        }
                       }

                }
            }
            int numDisjointSets()
            {
                return numSets;
            }
            int sizeOfSet(int i)
            {
                return setSize[findSet(i)];
            }


};

int main()
{
    printf("Assume that there are 5 disjoint sets initially\n");
    UnionFind UF(5);
    printf("%d\n",UF.numDisjointSets());
    UF.unionSet(0,1);
    printf("%d\n",UF.numDisjointSets());
    UF.unionSet(2,3);
    printf("%d\n",UF.numDisjointSets());
    UF.unionSet(3,4);
    printf("%d\n",UF.numDisjointSets());
    cout<<"\n\n\n\n\n\n";
    printf("isSameset(0,3)=%d\n",UF.isSameSet(0,3));
    printf("isSameset(4,3)=%d\n",UF.isSameSet(4,3));
    for(int i=0;i<5;i++)
    {
        printf("findSet(%d)=%d,sizeOfSet(%d) = %d\n",i,UF.findSet(i),i,UF.sizeOfSet(i));
    }
    UF.unionSet(0,3);

    printf("%d\n",UF.numDisjointSets());

    for(int i=0;i<5;i++)
    {
        printf("findSet(%d) = %d, sizeOfSet(i) = %d\n",i,UF.findSet(i),i,UF.sizeOfSet(i));
    }
    return 0;
}
