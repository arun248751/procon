x;d(n,r,i){for(;--i;)n%i==0&&r<(x=d(i,0,i))&&(r=x);for(;n;n/=10)r+=n%10;return r;}main(){for(;~scanf("%d",&x);)printf("%d\n",d(x,0,x));}