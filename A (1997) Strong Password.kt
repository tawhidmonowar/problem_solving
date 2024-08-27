import kotlin.text.StringBuilder

fun main() {
    val testCase = readln().toInt()
    for (t in 1..testCase) {
        val str = readln().toString()
        val  sb = StringBuilder(str)
        var isInserted = false
        for (i in 0..str.length-2) {
            if (str[i] == str[i+1]) {
                if (str[i]=='a') {
                    sb.insert(i+1,'b')
                    isInserted = true
                    break
                } else {
                    sb.insert(i+1,'a')
                    isInserted = true
                    break
                }
            }
        }
        if (!isInserted) {
            if (str[0]=='a') {
                sb.insert(0,'b')
            } else {
                sb.insert(0, 'a')
            }
        }
        val result = sb.toString()
        println(result)
    }
}