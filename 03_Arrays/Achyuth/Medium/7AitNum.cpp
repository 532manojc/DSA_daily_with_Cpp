vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int> v1;
     vector<int> v2;
     for(int i=0;i<a.size();i++){
           if(a[i]>=0){
               v1.push_back(a[i]);
           }
           else{
               v2.push_back(a[i]);
           }
     }
     int i=0,j=0,k=0;
     while(i<a.size() && j<v1.size() && k<v2.size()){
            a[i]=v1[j];
            i++;
            j++;
            a[i]=v2[k];
            i++;
            k++;
     }
    return a;
}