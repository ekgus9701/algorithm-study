import Foundation
var n1=Int(readLine()!)!
var n2=Int(readLine()!)!

var a:Int = (n1*(n2%10))
var b:Int = (n1*((n2%100)/10))
var c:Int = (n1*(n2/100))
var d:Int = (n1*n2)

print(a)
print(b)
print(c)
print(d)
