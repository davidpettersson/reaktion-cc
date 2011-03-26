env = Environment()
lib = env.SharedLibrary('reaktion', Glob('source/*.cc'))

env = Environment()
env.Append(CPPPATH = [ 'source' ])
env.Append(LIBS = [ lib ])
env.Program("printproto", Glob('demos/*.cc'))
