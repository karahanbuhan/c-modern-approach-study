**Why is it not a good idea for an identifier to contain more than one adjacent underscore (as
in current___balance, for example)?**

**My answer**: It makes reading the identifier harder as it is hard to count how many underscore characters there are. 
Also, in C, identifiers containing double underscores or beginning with an underscore followed by an uppercase letter are *reserved for implementation use* (compiler or standard library), so using them may cause naming conflict.