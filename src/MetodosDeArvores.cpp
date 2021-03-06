
void inserir(int valor){
    NoArvore *noArvore = new NoArvore(valor);
    if (raiz == NULL){
        raiz = noArvore;
    } else {

        NoArvore *auxNoArvore = raiz;  
        while(auxNoArvore != NULL && auxNoArvore->valor != valor){
            if (auxNoArvore->valor > valor){
                if (auxNoArvore->esquerda == NULL){
                    auxNoArvore->esquerda = noArvore;
                } else {
                    auxNoArvore = auxNoArvore->esquerda;
                }

            } else {
                if (auxNoArvore->direita == NULL){
                    auxNoArvore->direita = noArvore;
                } else {
                    auxNoArvore = auxNoArvore->direita;
                }
                
            }
        }
        auxNoArvore = noArvore;
    }
}
 
NoArvore *acharPai (int valor){
    NoArvore *auxNoArvore = raiz;
    while(auxNoArvore != NULL){
        if (auxNoArvore->valor > valor){
            if (auxNoArvore->esquerda->valor == valor){
                return auxNoArvore;
            } else {
                auxNoArvore = auxNoArvore->esquerda;
            }
        } else{
            if (auxNoArvore->direita->valor == valor){
                return auxNoArvore;
            } else {
                auxNoArvore = auxNoArvore->direita;
            }
        }
    }
    return NULL;
}