from unrealcv import client

obj_name = 'EditorCube11'

client.connect()

def test_rot_lot(obj_name):
    # TODO: check whether this object is movable
    # Try get info
    [x,y,z] = client.request('vget /object/%s/location').split(' ')
    [pitch,yaw,roll] = client.request('vget /object/%s/rotation').split(' ')

    # Because loc and rot is known for playground, we can check their value directly
    [dstx, dsty, dstz] = [sum(x) for x in zip([x,y,z], [10, 10, 10])]  
    # Add two vectors, avoid using numpy so less dependency
    client.request('vset /object/%s/location %f %f %f' % (obj_name, dstx, dsty, dstz))
    # Check again to see whether the value is as expected
    [x,y,z] = client.request('vget /object/%s/location' % obj_name).split(' ')
    assert(x == dstx and y == dsty and z == dstz)

    [dstpitch, dstyaw, dstroll] = [sum(x) for x in zip([pitch, yaw, roll], [10, 10, 10])]
    [pitch,yaw,roll] = client.request('vget /object/%s/rotation' % obj_name).split(' ')
