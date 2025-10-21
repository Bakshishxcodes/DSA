# p=false q=false r=true

cout << (p==q==r);

OUTPUT -> 1 (not 0);

REASON -> p==q means 0==0 results 1 and 1==r which means 1==1 results 1. 