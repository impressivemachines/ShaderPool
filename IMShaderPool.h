//
//  IMShaderPool.h
//  
// (c) 2013 Simon Winder - Impressive Machines LLC
//

#import <Foundation/Foundation.h>

@interface IMShaderPool : NSObject
{
    NSMutableDictionary *m_dict;  
}

@property (nonatomic, retain) NSString *path;

- (id)initWithPath:(NSString *)path;
- (BOOL)loadProgram:(NSString *)name vertexShader:(NSString *)vertexFile fragmentShader:(NSString *)fragmentFile;
- (GLuint)getProgram:(NSString *)name;
- (void)unloadProgram:(NSString *)name;
- (void)unloadAll;
- (BOOL)validateProgram:(GLuint)program;

@end
