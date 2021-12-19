#include <string>

std::string DNAStrand(const std::string& dna)
{
  std::string cdna="";
  for (int i=0; i<dna.length(); ++i){
    switch (std::toupper(dna[i])){
        case 'A': cdna+='T';
                  break;
        case 'G': cdna+='C';
                  break;
        case 'C': cdna+='G';
                  break;
        case 'T': cdna+='A';
                  break;
        default: break;
    }
  }
  return cdna;
}
