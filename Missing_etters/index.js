function fearNotLetter(str) {
    let alphabet = ["a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"];
   let begin = str.charAt(0);
   let end = str.charAt(str.length -1);
   let portionRange = alphabet.slice(alphabet.indexOf(str.charAt(0)),alphabet.indexOf(str.charAt(str.length -1))+1);
   
  
  
   for(let i=0;i<portionRange.length;i++){
     if( str.indexOf(portionRange[i]) == -1 ){
        return portionRange[i]
     }
   }
  
  return undefined
  
  }
  
  console.log(fearNotLetter("abcdefghijklmnopqrstuvwxyz"));
  console.log(fearNotLetter("abce"));
  console.log(fearNotLetter("stvwx"));