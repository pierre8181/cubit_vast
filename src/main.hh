#ifndef MAIN_H
#define MAIN_H

extern void runTestPreSealHash(unsigned char* seal, unsigned char* preseal_bytes);
extern void runTestSealHash(unsigned char* seal, unsigned char* block_hash, unsigned long nonce);
extern void runTest(unsigned char* data, unsigned long size, unsigned char* digest);
extern unsigned long solve_cuda_c(int blockSize, unsigned char* seal, unsigned long* nonce_start, unsigned long update_interval, unsigned int n_nonces, unsigned long* limit, unsigned char* block_bytes);

#endif // MAIN_H