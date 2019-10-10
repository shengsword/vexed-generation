
vector vg_from_spherical(float theta; float phi; float radius) {
    float x = sin(phi) * radius * sin(theta);
    float y = cos(phi) * radius;
    float z = sin(phi) * radius * cos(theta);
    return set(x, y, z);
}
vector vg_to_spherical(vector v) {
    float r = length(v);
    float theta = 0.;
    float phi = 0.;
	if ( r != 0. ) {
		float theta = atan2( v.x, v.z );
		float phi = acos( clamp( v.y / r, - 1., 1. ) );
	}
    return set(theta, phi, radius);
}
