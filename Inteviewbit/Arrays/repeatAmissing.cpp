def long long ll;
 
vector<int> Solution::repeatedNumber(const vector<int> &A) {
    ll n = A.size();
    ll sumN = ((ll)n*(ll)(n+1))/2;
    ll sumA = 0;
    ll a,b,dif1,dif2;
    for(ll i=0;i<n;i++)
    {
        sumA+= (ll)A[i];
    }
    //cout<<sumA<<"   "<<sumN<<endl;
    ll sumSN =0;
    for(ll i =1;i<=n;i++)
    {
        sumSN += (ll)i*(ll)i;
    }
    ll sumSA = 0;
    for(ll i=0;i<n;i++)
    {
        sumSA += (ll)A[i]*(ll)A[i];
    }
   //cout<<sumSA<<"   "<<sumSN<<endl;
    dif1 = (ll)sumN - (ll)sumA;
    dif2 = ((ll)sumSN-(ll)sumSA)/(ll)dif1;
    b = ((ll)dif1 + (ll)dif2)/2;
    a =((ll)b - (ll)dif1);
    vector<int > v;
    v.push_back(a);
    v.push_back(b);
    return v;
}
