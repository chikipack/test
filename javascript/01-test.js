var b = 1
const foo = () => {
    b++
    console.log(b)
    var b = 3
}
foo()