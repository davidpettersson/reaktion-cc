libenv = Environment()
reaktorlib = libenv.SharedLibrary('reaktor', Glob('reaktor/*.cc'))

prgenv = Environment()
prgenv.Append(CPPPATH = [ 'reaktor' ])
prgenv.Append(LIBS = [ reaktorlib ])
prgenv.Program("printproto", Glob('demos/*.cc'))
