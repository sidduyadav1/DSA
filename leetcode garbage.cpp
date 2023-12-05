class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
        int totalM=0;
        int totalG=0;
        int totalP=0;

        int travelM=0;
        int travelG=0;
        int travelP=0;


        for(int i=0;i<garbage.size();i++){
             
             string ch=garbage[i];
             for(int j=0;j<ch.length();j++){
                
                if(ch[j]=='M'){
                totalM++;
                 travelM=i;
                }
                else if(ch[j]=='P'){
                totalP++;
                travelP=i;
                }
                else if(ch[j]=='G'){
                totalG++;
                travelG=i;
                }
             }
        }

      int travelsumM=0;
      int travelsumP=0;
      int travelsumG=0;


      for(int i=0;i<travelM;i++){
           travelsumM += travel[i];
      }

      for(int i=0;i<travelP;i++){
          travelsumP += travel[i];
      }
    
    for(int i=0;i<travelG;i++){
        travelsumG += travel[i];
    }

    int minimumtime=totalM+travelsumM+totalP+travelsumP+totalG+travelsumG;

    return minimumtime;
           }
};
