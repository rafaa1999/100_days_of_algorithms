function translatePigLatin(str) {
    let newStr =str;
    let vowels = ["a","e","i","o","u"];
    let consonant =["b","c","d","j","f","k","l","m","n","o","p","q","r","s","t","y","v","w","x","z","g"]
    for(let i=0;i<vowels.length;i++){
        if(str[0] === vowels[i]){
           return newStr += "way" 
        }else if(consonant.indexOf(str[0]) > 0){
          let firstChar =  newStr.replace(str[0]," ").trim()
          return  firstChar + str[0] + "ay" 
        }
    }
    console.log(newStr)
  }
  
  console.log(translatePigLatin("glove"));