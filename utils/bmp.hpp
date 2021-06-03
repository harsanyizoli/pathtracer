using Statistics

# Integer tipusok:
# Int8/Uint8 
# Int16/Uint16 
# Int32/Uint32 
# Int64/Uint64 
# Int128/Uint128
# Bool

# Floating point tipusok:
# Float16
# Float32
# Float64

# alap egész érték tipusa függ a rendszer architekrutátol (Sys.WORD_SIZE)
x = 1
typeof(x) # Int64, 64 bites rendszeren

# előjel nélküli egészt 0x prefix és hexadecimális számjegyekkel lehet megadni
x = 0x1
typeof(x) # UInt8