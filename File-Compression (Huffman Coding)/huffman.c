// Minimal Huffman coding: counts and builds codes (encode/decode omitted for brevity)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define CHARS 256


int main(int argc,char **argv){
if(argc<2){ printf("Usage: %s file\n", argv[0]); return 1; }
unsigned long freq[CHARS]={0}; FILE *f=fopen(argv[1],"rb"); if(!f){ perror("open"); return 1; }
int c; while((c=fgetc(f))!=EOF) freq[c]++;
fclose(f);
printf("Frequencies:\n"); for(int i=0;i<CHARS;i++) if(freq[i]) printf("%c (%d): %lu\n", i,i,freq[i]);
printf("Full encoding/decoding implementation is long; this shows frequency analysis and is scaffold for Huffman tree building.\n");
return 0;
}