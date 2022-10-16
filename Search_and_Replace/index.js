function myReplace(str, before, after) {

    let index = str.indexOf(before)
    console.log(index)
    if(str[index] === str[index].toUpperCase()){
        after= after.charAt(0).toUpperCase() + after.slice(1)
    }
    console.log(after)
    return str.replace(before,after)
  
  }
  
  console.log(myReplace("His name is tom", "tom", "john"));