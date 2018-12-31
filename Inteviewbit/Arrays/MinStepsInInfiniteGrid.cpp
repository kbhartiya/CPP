int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int x,y;
    int dis = 0;
    for(int i=1;i<A.size();i++)
    {
        x = (A[i]>A[i-1]) ? (A[i]-A[i-1]):(A[i-1]-A[i]);
        y = (B[i]>B[i-1]) ? (B[i]-B[i-1]):(B[i-1]-B[i]);
        if(x>y)
            dis +=x;
        else
            dis +=y;
            
    }
    return dis;
}
