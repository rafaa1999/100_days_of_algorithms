function pairElement(str) {
    let arr = []
    for(let i =0;i<str.length;i++){
      let double = [];
      if(str[i] == "A"){
          double.push(str[i])
          double.push("T")
          arr.push(double)
      }else if(str[i] == "T"){
          double.push(str[i])
          double.push("A")
          arr.push(double)
      }else if(str[i] == "G"){
          double.push(str[i])
          double.push("C")
          arr.push(double)
      }else if(str[i] == "C"){
          double.push(str[i])
          double.push("G")
          arr.push(double)
      }
    }
    return arr
  }
  
  console.log(pairElement("ATCGA"));