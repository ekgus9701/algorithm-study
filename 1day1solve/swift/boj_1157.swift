import Foundation
let word = readLine()!.uppercased()
var dict: [String:Int] = [:]
var ans: [String] = []

for i in word {
    if dict[String(i)] == nil {
        dict[String(i)] = 1
    }
    else {
        dict[String(i)]! += 1
    }
}

for key in dict.keys {
    if dict[key] == dict.values.max() {
        ans.append(key)
    }
}

print(ans.count > 1 ? "?" : "\(ans[0])" )
