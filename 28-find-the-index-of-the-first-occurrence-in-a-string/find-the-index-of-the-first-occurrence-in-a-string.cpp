class Solution {
public:
    int strStr(string haystack, string needle) {
        //haystack'te arama yapacağımız başlangı. indexleri geziliyor
     for(int i = 0; i <= haystack.length(); i++){
        //needle daki karakterleri kontrol etmek için kullanılacak index
        int j = 0;
        //karşılaştırma
        //1)needle ın sonunda mıyız
        //2)karakterler eşleşiyor olmalı
        while(j < needle.length() && haystack[i+j] == needle[j]){
            j++;
        }
        //karakterler eşleştikçe j artacak
        //en son tüm karakterler eşleştiyse başlangıç indexi döndürülür
        if(j == needle.length()) {
            return i;
     }   
    }
    return -1;
    }
};