class Solution {
public:
    int compress(vector<char>& s) {
        // int count=1,index=0;
        //  char prev=chars[0];
//       // int i=0;
//        for(int i=1;i<chars.size();i++){
//             // while(i<chars.size()){

//              if(chars[i]==prev){
//                 count++;
//               // i++;
//                 prev=chars[i];
//              }

//         else{
//             if(count>1){
//                 chars[index++]=prev;
//                 if(count>9){
//                      int r=0;
//                       while(count){
//                           r=(count%10)+'0';
//                           chars[index++]=r;
//                           count=count/10;
//                       }
//                 }
//                 else{
//                 chars[index++]=count;
//                 count=1;
//               //  i++;
//                 prev=chars[i];
//                 }
//             }
//             else{
//                 chars[index++]=prev;
//                // i++;
//                 prev=chars[i];
//             }
//         }


//         }


// return index;

int index=0;
int count=1;
int i;
char prev=s[0];

for(i=1;i<s.size();i++){

  if(prev==s[i]){
      prev=s[i];
      count++;
  }
  else{
 s[index++]=prev;
  if(count>1){

        // if(count>9){
        //       s[index++]=prev;
        //       int start=index;
        //     while(count){
        //     int r=0;
        //     r=count%10;
        //     s[index++]=r+'0';
        //     count=count/10;
        //     }
        // reverse(s.begin()+start,s.begin()+index);
int start=index;
while(count){
    s[index++]=(count%10)+'0';
    count/=10;
}
reverse(s.begin()+start,s.begin()+index);
  }
        prev=s[i];
        count=1;
  }
}
s[index++]=prev;
if(count>1){
    int start=index;
    while(count){
        s[index++]=(count%10)+'0';
        count/=10;
    }
    reverse(s.begin()+start,s.begin()+index);

}
return index;
    //     else{
    //       s[index++]=prev;
    //       s[index++]=count+'0';
    //       count=1;
    //       prev=s[i];
    //   }
     // }
    //   else{
    //       s[index++]=prev;
    //       prev=s[i];
    //   }
 // }


//}
// if(count>1){
   
//         if(count>9){
//             s[index++]=prev;
//             int start=index;
//             while(count){
//             int r=0;
//             r=count%10;
//             s[index++]=r+'0';
//             count=count/10;
//             }
           
//             reverse(s.begin()+start,s.begin()+index);
//         }
//         else{
//           s[index++]=prev;
//           s[index++]=count+'0';
//           count=1;
//           prev=s[i];
//       }
// }
// else{
//     s[index++]=prev;
// }

//return index;






    } 
};
