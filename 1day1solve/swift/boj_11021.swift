import Foundation

let input = Int(readLine()!)!
for i in 1...input{
    let arr = readLine()!.split(separator: " ").map { Int(String($0))! }
    
    let sum=arr[0]+arr[1]
    print("Case #\(i): \(sum)");
}



