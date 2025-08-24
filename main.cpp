#include <iostream>
using namespace std;
int search_colvo(int a,int b[],int long1)
{
    int c=0;
    for (int i=0;i<long1;i++){
        if (b[i]==a){
            c=c+1;
        }
    }
    return c;
}
int main()
{
    int long1,long2;
    cout<<"Vvedite dlinu 1 mnogestva ";
    cin>>long1;
    cout<< "Vvedite dlinu 2 mnogestva ";
    cin>>long2;
    cout<<"Zapolnite 1 mnogestvo"<<endl;
    int long3=10;
    int *universe = new int[long3];
    int *arr1=new int[long1];
    int *arr2=new int[long2];
    cout<<"Universom ot 1 do "<<long3<<endl;
    for (int i=0;i<long3;i++){
        universe[i]=i+1;
    }
    for (int i=0; i<long1; i++)
    {
      cin>>arr1[i];
    }
    cout<<"Zapolnite 2 mnogestvo"<<endl;
    for (int i=0;i<long2;i++)
    {
      cin>>arr2[i];
    }
    for (int i=0; i<long1;i++){
        if (search_colvo(arr1[i],arr1,long1)>1){
            cout<<"Chleny mnogestva ne unikalny ):"<<endl;
            return 0;
            //l=false;
            break;
        }
    }
    for (int i=0; i<long2;i++){
        if (search_colvo(arr2[i],arr2,long2)>1){
            cout<<"Chleny mnogestva ne unikalny ):"<<endl;
            return 0;
            //l=false; 
            break;
        }
    }
    for (int i=0; i<long1;i++){
        if (search_colvo(arr1[i],universe,long3)==0){
            cout<<"Chleny mnogestva ne v universe ):"<<endl;
            return 0;
            //l=false;
            break;
        }
    }
    for (int i=0; i<long2;i++){
        if (search_colvo(arr2[i],universe,long3)==0){
            cout<<"Chleny mnogestva ne v universe ):"<<endl;
            return 0;
            //l=false; 
            break;
        }
    }
   cout<<"Obedenenie: ";
   for (int i=0;i<long1;i++)
   {                            //SUMMA
        cout<<arr1[i]<<" ";
   }
   for (int i=0;i<long2;i++){
        if (search_colvo(arr2[i],arr1,long1)==0)
        {   
            cout<<arr2[i]<<" ";                    //SUMMA
        }
   }
   cout<<""<<endl;
   cout<<"Peresechenie: ";
   for (int i=0;i<long1;i++){
        if (search_colvo(arr1[i],arr2,long2)==1)  
        {
            cout<<arr1[i]<<" ";
        }                                                                                    
   }
   cout<<""<<endl;
   cout<<"Raznost1: "; 
    for (int i=0;i<long1;i++){
        if (search_colvo(arr1[i],arr2,long2)==0) 
        {
            cout<<arr1[i]<<" ";
        }                                                                                    
   }
   cout<<""<<endl;
   cout<<"Raznost2: ";  
    for (int i=0;i<long2;i++){
        if (search_colvo(arr2[i],arr1,long1)==0) 
        {
            cout<<arr2[i]<<" ";
        }                                                                                    
   }
   cout<<""<<endl;
   cout<<"Simmetria: "; 
   for (int i=0;i<long1;i++){
        if (search_colvo(arr1[i],arr2,long2)==0) 
        {
            cout<<arr1[i]<<" ";
        }                                                                                    
   }
   for (int i=0;i<long2;i++){
        if (search_colvo(arr2[i],arr1,long1)==0) 
        {
            cout<<arr2[i]<<" ";
        }                                                                                    
   }
   cout<<""<<endl;
   cout<<"Universe1: ";
   for (int i=0;i<long3;i++){
        if (search_colvo(universe[i],arr1,long1)==0){
            cout<<universe[i]<<" ";
        }
    }
    cout<<""<<endl;
    cout<<"Universe2: ";
   for (int i=0;i<long3;i++){
        if (search_colvo(universe[i],arr2,long2)==0){
            cout<<universe[i]<<" ";
        }
    }
    return 0;
}  