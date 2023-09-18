/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(str1, str2) {
   var mp = new Map();
  for(var i=0;i<str1.length;i++)
  {
    if (mp.has(str1[i])){
      mp.set(str1[i],mp.get(str1[i])+1)
    } else {
      mp.set(str1[i],1);
    }
  }

  for(var i=0;i<str2.length;i++){
    if(mp.has(str2[i]) && mp.get(str2[i])!=1){
      mp.set(str2[i],mp.get(str2[i])-1);
    } else if(mp.has(str2[i]) && mp.get(str2[i])==1) {
      mp.delete(str2[i]);
    } else {
      return false;
    }
  }
  return mp.size==0; 
};
